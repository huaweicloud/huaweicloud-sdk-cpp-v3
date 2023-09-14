
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationItem_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationItem_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ApplicationItem
    : public ModelBase
{
public:
    ApplicationItem();
    virtual ~ApplicationItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ApplicationItem members

    /// <summary>
    /// 创建application的名字。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 应用平台。
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 创建application的时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// Application的唯一资源标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// Application的唯一标识ID。
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 应用平台是否启用。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);

    /// <summary>
    /// 苹果证书过期时间APNS、APNS_SANDBOX平台特有属性时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getAppleCertificateExpirationDate() const;
    bool appleCertificateExpirationDateIsSet() const;
    void unsetappleCertificateExpirationDate();
    void setAppleCertificateExpirationDate(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string enabled_;
    bool enabledIsSet_;
    std::string appleCertificateExpirationDate_;
    bool appleCertificateExpirationDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationItem_H_
