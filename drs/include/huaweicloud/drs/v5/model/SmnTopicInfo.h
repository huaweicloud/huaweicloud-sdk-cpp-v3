
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SmnTopicInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SmnTopicInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 收件方式与信息体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SmnTopicInfo
    : public ModelBase
{
public:
    SmnTopicInfo();
    virtual ~SmnTopicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmnTopicInfo members

    /// <summary>
    /// Topic的名字。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Topic的唯一的资源标识。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// Topic的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 消息推送的策略，取值： - RETRY_ON_FAILURE：发送失败，保留到失败队列。 - DROP_ON_FAILURE：直接丢弃发送失败的消息。
    /// </summary>

    std::string getPushPolicy() const;
    bool pushPolicyIsSet() const;
    void unsetpushPolicy();
    void setPushPolicy(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string pushPolicy_;
    bool pushPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SmnTopicInfo_H_
