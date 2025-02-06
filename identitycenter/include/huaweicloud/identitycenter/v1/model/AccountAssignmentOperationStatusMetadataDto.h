
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentOperationStatusMetadataDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentOperationStatusMetadataDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 提供有关AccountAssignment创建请求的信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AccountAssignmentOperationStatusMetadataDto
    : public ModelBase
{
public:
    AccountAssignmentOperationStatusMetadataDto();
    virtual ~AccountAssignmentOperationStatusMetadataDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountAssignmentOperationStatusMetadataDto members

    /// <summary>
    /// 创建日期
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// 请求唯一标识
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 权限集授权状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccountAssignmentOperationStatusMetadataDto_H_
