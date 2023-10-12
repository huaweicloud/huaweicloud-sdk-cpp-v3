
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProject_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProject_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业项目
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  EnterpriseProject
    : public ModelBase
{
public:
    EnterpriseProject();
    virtual ~EnterpriseProject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnterpriseProject members

    /// <summary>
    /// 只能由中文字符、英文字母（a~zA~Z）、数字（0~9）、下划线（_）、中划线（-）组成，且长度为[1-64]个字符。名称不能为大小写混合的default，且在租户账号内唯一。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 最大长度512个字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 企业项目类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_EnterpriseProject_H_
