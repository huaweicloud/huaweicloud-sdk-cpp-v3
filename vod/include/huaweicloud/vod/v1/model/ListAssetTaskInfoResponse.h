
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/Result.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetTaskInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetTaskInfoResponse();
    virtual ~ListAssetTaskInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetTaskInfoResponse members

    /// <summary>
    /// 结果列表展示 
    /// </summary>

    std::vector<Result>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<Result>& value);

    /// <summary>
    /// 根据条件的总条目数量 
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 下次查询的标志位 
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);


protected:
    std::vector<Result> results_;
    bool resultsIsSet_;
    int64_t count_;
    bool countIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoResponse_H_
