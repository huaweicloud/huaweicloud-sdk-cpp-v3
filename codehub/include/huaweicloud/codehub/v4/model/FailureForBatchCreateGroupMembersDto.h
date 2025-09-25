
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FailureForBatchCreateGroupMembersDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FailureForBatchCreateGroupMembersDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联失败成员
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  FailureForBatchCreateGroupMembersDto
    : public ModelBase
{
public:
    FailureForBatchCreateGroupMembersDto();
    virtual ~FailureForBatchCreateGroupMembersDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailureForBatchCreateGroupMembersDto members

    /// <summary>
    /// iam_id
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::vector<std::string>& getMessage();
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::vector<std::string>& value);


protected:
    std::string iamId_;
    bool iamIdIsSet_;
    std::vector<std::string> message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FailureForBatchCreateGroupMembersDto_H_
