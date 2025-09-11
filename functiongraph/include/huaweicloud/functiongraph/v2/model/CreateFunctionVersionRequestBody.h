
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionVersionRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionVersionRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateFunctionVersionRequestBody
    : public ModelBase
{
public:
    CreateFunctionVersionRequestBody();
    virtual ~CreateFunctionVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFunctionVersionRequestBody members

    /// <summary>
    /// md5键值
    /// </summary>

    std::string getDigest() const;
    bool digestIsSet() const;
    void unsetdigest();
    void setDigest(const std::string& value);

    /// <summary>
    /// 发布版本名称
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 发布版本描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string digest_;
    bool digestIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionVersionRequestBody_H_
