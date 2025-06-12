
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardTextConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardTextConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户输入的数字人名片信息。实际可以填写哪些字段取决于名片模板。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BusinessCardTextConfig
    : public ModelBase
{
public:
    BusinessCardTextConfig();
    virtual ~BusinessCardTextConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessCardTextConfig members

    /// <summary>
    /// 姓名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 企业或组织名称。
    /// </summary>

    std::string getCompany() const;
    bool companyIsSet() const;
    void unsetcompany();
    void setCompany(const std::string& value);

    /// <summary>
    /// 职位名称。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 手机号码。
    /// </summary>

    std::string getMobilePhone() const;
    bool mobilePhoneIsSet() const;
    void unsetmobilePhone();
    void setMobilePhone(const std::string& value);

    /// <summary>
    /// 固话号码。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 电子邮件地址。
    /// </summary>

    std::string getMail() const;
    bool mailIsSet() const;
    void unsetmail();
    void setMail(const std::string& value);

    /// <summary>
    /// 地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 其他信息1。可填写一些公司广告语等
    /// </summary>

    std::string getOther1() const;
    bool other1IsSet() const;
    void unsetother1();
    void setOther1(const std::string& value);

    /// <summary>
    /// 其他信息2。可填写一些公司广告语等
    /// </summary>

    std::string getOther2() const;
    bool other2IsSet() const;
    void unsetother2();
    void setOther2(const std::string& value);

    /// <summary>
    /// 其他信息3。可填写一些公司广告语等
    /// </summary>

    std::string getOther3() const;
    bool other3IsSet() const;
    void unsetother3();
    void setOther3(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string company_;
    bool companyIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string mobilePhone_;
    bool mobilePhoneIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string mail_;
    bool mailIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string other1_;
    bool other1IsSet_;
    std::string other2_;
    bool other2IsSet_;
    std::string other3_;
    bool other3IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardTextConfig_H_
