
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeResult_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeResult_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/MergeRequestsItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeResult
    : public ModelBase
{
public:
    MergeResult();
    virtual ~MergeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeResult members

    /// <summary>
    /// 已关闭合并请求数
    /// </summary>

    double getClosed() const;
    bool closedIsSet() const;
    void unsetclosed();
    void setClosed(double value);

    /// <summary>
    /// 合并请求详情
    /// </summary>

    std::vector<MergeRequestsItem>& getMergeRequests();
    bool mergeRequestsIsSet() const;
    void unsetmergeRequests();
    void setMergeRequests(const std::vector<MergeRequestsItem>& value);

    /// <summary>
    /// 已合并合并请求数数
    /// </summary>

    double getMerged() const;
    bool mergedIsSet() const;
    void unsetmerged();
    void setMerged(double value);

    /// <summary>
    /// 开启中合并请求数
    /// </summary>

    double getOpened() const;
    bool openedIsSet() const;
    void unsetopened();
    void setOpened(double value);

    /// <summary>
    /// 合并请求总数
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);


protected:
    double closed_;
    bool closedIsSet_;
    std::vector<MergeRequestsItem> mergeRequests_;
    bool mergeRequestsIsSet_;
    double merged_;
    bool mergedIsSet_;
    double opened_;
    bool openedIsSet_;
    double total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeResult_H_
