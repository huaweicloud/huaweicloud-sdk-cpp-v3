
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SystemParameters_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SystemParameters_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  SystemParameters_result
    : public ModelBase
{
public:
    SystemParameters_result();
    virtual ~SystemParameters_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SystemParameters_result members

    /// <summary>
    /// 编号
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 参数描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SystemParameters_result_H_
