
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverTaskDetailsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverTaskDetailsResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/AssetDetails.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowTakeOverTaskDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTakeOverTaskDetailsResponse();
    virtual ~ShowTakeOverTaskDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowTakeOverTaskDetailsResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态。
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 媒资信息。
    /// </summary>

    std::vector<AssetDetails>& getAssets();
    bool assetsIsSet() const;
    void unsetassets();
    void setAssets(const std::vector<AssetDetails>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::vector<AssetDetails> assets_;
    bool assetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverTaskDetailsResponse_H_
