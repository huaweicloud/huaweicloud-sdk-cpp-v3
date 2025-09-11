
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Function_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Function_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  Function
    : public ModelBase
{
public:
    Function();
    virtual ~Function();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Function members

    /// <summary>
    /// 函数名称，在单个流程中，名称需要唯一
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 函数调用URN
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 函数扩展属性，由用户自己定制
    /// </summary>

    Object getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string operation_;
    bool operationIsSet_;
    Object metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Function_H_
