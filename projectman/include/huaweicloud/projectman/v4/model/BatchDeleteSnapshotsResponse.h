
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteSnapshotsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteSnapshotsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/FailureDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteSnapshotsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteSnapshotsResponse();
    virtual ~BatchDeleteSnapshotsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSnapshotsResponse members

    /// <summary>
    /// 响应信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 响应码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 总数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 成功数量。
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);

    /// <summary>
    /// 失败数量。
    /// </summary>

    int32_t getFailureCount() const;
    bool failureCountIsSet() const;
    void unsetfailureCount();
    void setFailureCount(int32_t value);

    /// <summary>
    /// 失败详情列表。
    /// </summary>

    std::vector<FailureDetail>& getFailureDetails();
    bool failureDetailsIsSet() const;
    void unsetfailureDetails();
    void setFailureDetails(const std::vector<FailureDetail>& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string code_;
    bool codeIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t successCount_;
    bool successCountIsSet_;
    int32_t failureCount_;
    bool failureCountIsSet_;
    std::vector<FailureDetail> failureDetails_;
    bool failureDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteSnapshotsResponse_H_
