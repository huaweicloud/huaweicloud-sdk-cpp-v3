
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListLinksResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListLinksResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobLinkResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListLinksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLinksResponse();
    virtual ~ListLinksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLinksResponse members

    /// <summary>
    /// 可用链路信息。
    /// </summary>

    std::vector<JobLinkResp>& getJobLinks();
    bool jobLinksIsSet() const;
    void unsetjobLinks();
    void setJobLinks(const std::vector<JobLinkResp>& value);

    /// <summary>
    /// 可用链路总条数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<JobLinkResp> jobLinks_;
    bool jobLinksIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListLinksResponse_H_
