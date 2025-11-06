
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestVersionsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestVersionsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestVersionsResponse();
    virtual ~ListMergeRequestVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestVersionsResponse members

    /// <summary>
    /// **参数解释：** diff主键ID。    
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** head commit节点。
    /// </summary>

    std::string getHeadCommitSha() const;
    bool headCommitShaIsSet() const;
    void unsetheadCommitSha();
    void setHeadCommitSha(const std::string& value);

    /// <summary>
    /// **参数解释：** base commit节点。
    /// </summary>

    std::string getBaseCommitSha() const;
    bool baseCommitShaIsSet() const;
    void unsetbaseCommitSha();
    void setBaseCommitSha(const std::string& value);

    /// <summary>
    /// **参数解释：** tart commit节点。
    /// </summary>

    std::string getStartCommitSha() const;
    bool startCommitShaIsSet() const;
    void unsetstartCommitSha();
    void setStartCommitSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** MR主键ID。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** diff大小。
    /// </summary>

    std::string getRealSize() const;
    bool realSizeIsSet() const;
    void unsetrealSize();
    void setRealSize(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string headCommitSha_;
    bool headCommitShaIsSet_;
    std::string baseCommitSha_;
    bool baseCommitShaIsSet_;
    std::string startCommitSha_;
    bool startCommitShaIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string realSize_;
    bool realSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestVersionsResponse_H_
