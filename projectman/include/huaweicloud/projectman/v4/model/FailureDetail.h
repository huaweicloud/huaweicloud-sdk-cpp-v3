
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FailureDetail_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FailureDetail_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量操作快照失败响应对象。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FailureDetail
    : public ModelBase
{
public:
    FailureDetail();
    virtual ~FailureDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailureDetail members

    /// <summary>
    /// 快照ID。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 快照标题。
    /// </summary>

    std::string getSnapshotTitle() const;
    bool snapshotTitleIsSet() const;
    void unsetsnapshotTitle();
    void setSnapshotTitle(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string snapshotTitle_;
    bool snapshotTitleIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FailureDetail_H_
