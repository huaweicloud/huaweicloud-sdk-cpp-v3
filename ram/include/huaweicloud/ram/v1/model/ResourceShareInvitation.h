
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareInvitation_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareInvitation_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源共享邀请的详细信息。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceShareInvitation
    : public ModelBase
{
public:
    ResourceShareInvitation();
    virtual ~ResourceShareInvitation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceShareInvitation members

    /// <summary>
    /// 接收资源共享邀请的账号ID。
    /// </summary>

    std::string getReceiverAccountId() const;
    bool receiverAccountIdIsSet() const;
    void unsetreceiverAccountId();
    void setReceiverAccountId(const std::string& value);

    /// <summary>
    /// 资源共享实例的ID。
    /// </summary>

    std::string getResourceShareId() const;
    bool resourceShareIdIsSet() const;
    void unsetresourceShareId();
    void setResourceShareId(const std::string& value);

    /// <summary>
    /// 资源共享实例的名称。
    /// </summary>

    std::string getResourceShareName() const;
    bool resourceShareNameIsSet() const;
    void unsetresourceShareName();
    void setResourceShareName(const std::string& value);

    /// <summary>
    /// 资源共享邀请的ID。
    /// </summary>

    std::string getResourceShareInvitationId() const;
    bool resourceShareInvitationIdIsSet() const;
    void unsetresourceShareInvitationId();
    void setResourceShareInvitationId(const std::string& value);

    /// <summary>
    /// 发送资源共享邀请的账号ID。
    /// </summary>

    std::string getSenderAccountId() const;
    bool senderAccountIdIsSet() const;
    void unsetsenderAccountId();
    void setSenderAccountId(const std::string& value);

    /// <summary>
    /// 资源共享邀请的当前状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建邀请的时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 最后一次更新邀请的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string receiverAccountId_;
    bool receiverAccountIdIsSet_;
    std::string resourceShareId_;
    bool resourceShareIdIsSet_;
    std::string resourceShareName_;
    bool resourceShareNameIsSet_;
    std::string resourceShareInvitationId_;
    bool resourceShareInvitationIdIsSet_;
    std::string senderAccountId_;
    bool senderAccountIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareInvitation_H_
