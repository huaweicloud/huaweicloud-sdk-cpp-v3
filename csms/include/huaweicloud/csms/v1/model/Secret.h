
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Secret_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Secret_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 凭据对象。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Secret
    : public ModelBase
{
public:
    Secret();
    virtual ~Secret();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Secret members

    /// <summary>
    /// 凭据的资源标识符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 凭据状态，取值如下：  ENABLED：表示启用状态  DISABLED：表示禁用状态  PENDING_DELETE：表示待删除状态  FROZEN：表示冻结状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 用于加密凭据值的KMS主密钥的ID值。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 凭据的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 凭据创建时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 凭据上次更新时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 凭据计划删除时间，时间戳，即从1970年1月1日至该时间的总秒数。  凭据不在删除计划中时，本项值为null。
    /// </summary>

    int64_t getScheduledDeleteTime() const;
    bool scheduledDeleteTimeIsSet() const;
    void unsetscheduledDeleteTime();
    void setScheduledDeleteTime(int64_t value);

    /// <summary>
    /// 凭据类型  - COMMON：通用凭据(默认)。用于应用系统中的各种敏感信息储存。 - RDS：RDS凭据 。专门针对RDS的凭据，用于存储RDS的账号信息。（已不支持，使用RDS-FG替代） - RDS-FG：RDS凭据 。专门针对RDS的凭据，用于存储RDS的账号信息。 - GaussDB-FG：GaussDB凭据。专门针对GaussDB的凭据，用于存储GaussDB的账号信息。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// 自动轮转  取值：true 开启, false 关闭(默认)
    /// </summary>

    bool isAutoRotation() const;
    bool autoRotationIsSet() const;
    void unsetautoRotation();
    void setAutoRotation(bool value);

    /// <summary>
    /// 轮转周期  约束：6小时-8,760小时 （365天）  类型：Integer[unit] ，Integer表示时间长度 。unit表示时间单位，d（天）、h（小时）、m（分钟）、s（秒）。例如 1d 表示一天，24h也表示一天  说明：当开启自动轮转时，必须填写该值
    /// </summary>

    std::string getRotationPeriod() const;
    bool rotationPeriodIsSet() const;
    void unsetrotationPeriod();
    void setRotationPeriod(const std::string& value);

    /// <summary>
    /// 轮转配置  约束：范围不超过1024个字符。  当secret_type为RDS-FG、GaussDB-FG时，配置为{\&quot;InstanceId\&quot;:\&quot;\&quot;,\&quot;SecretSubType\&quot;:\&quot;\&quot;}  说明：当secret_type为RDS-FG、GaussDB-FG时，必须填写该值  InstanceId为实例ID,SecretSubType为轮转子类型，取值为：SingleUser，MultiUser。  SingleUser：指定轮转类型为单用户模式轮转，每次轮转将指定账号重置为新的口令。  MultiUser：指定轮转类型为双用户模式轮转，SYSCURRENT和SYSPREVIOUS分别引用其中一个账号。凭据轮转时，SYSPREVIOUS引用的账号口令会被重置为新的随机口令，随后凭据交换SYSCURRENT和SYSPREVIOUS对账号的引用。
    /// </summary>

    std::string getRotationConfig() const;
    bool rotationConfigIsSet() const;
    void unsetrotationConfig();
    void setRotationConfig(const std::string& value);

    /// <summary>
    /// 轮转时间戳
    /// </summary>

    int64_t getRotationTime() const;
    bool rotationTimeIsSet() const;
    void unsetrotationTime();
    void setRotationTime(int64_t value);

    /// <summary>
    /// 下一次轮转时间戳
    /// </summary>

    int64_t getNextRotationTime() const;
    bool nextRotationTimeIsSet() const;
    void unsetnextRotationTime();
    void setNextRotationTime(int64_t value);

    /// <summary>
    /// 凭据订阅的事件列表，当前最大可订阅一个事件。当事件包含的基础事件触发时，通知消息将发送到事件对应的通知主题。
    /// </summary>

    std::vector<std::string>& getEventSubscriptions();
    bool eventSubscriptionsIsSet() const;
    void unseteventSubscriptions();
    void setEventSubscriptions(const std::vector<std::string>& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// FunctionGraph函数的urn。
    /// </summary>

    std::string getRotationFuncUrn() const;
    bool rotationFuncUrnIsSet() const;
    void unsetrotationFuncUrn();
    void setRotationFuncUrn(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int64_t scheduledDeleteTime_;
    bool scheduledDeleteTimeIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    bool autoRotation_;
    bool autoRotationIsSet_;
    std::string rotationPeriod_;
    bool rotationPeriodIsSet_;
    std::string rotationConfig_;
    bool rotationConfigIsSet_;
    int64_t rotationTime_;
    bool rotationTimeIsSet_;
    int64_t nextRotationTime_;
    bool nextRotationTimeIsSet_;
    std::vector<std::string> eventSubscriptions_;
    bool eventSubscriptionsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string rotationFuncUrn_;
    bool rotationFuncUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Secret_H_
