
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListMergeRequestReviewersRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListMergeRequestReviewersRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListMergeRequestReviewersRequest
    : public ModelBase
{
public:
    ListMergeRequestReviewersRequest();
    virtual ~ListMergeRequestReviewersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestReviewersRequest members

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 合并请求的短id
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMergeRequestReviewersRequest& dereference_from_shared_ptr(std::shared_ptr<ListMergeRequestReviewersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListMergeRequestReviewersRequest_H_
