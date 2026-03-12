
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailResult_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailResult_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteThumbnailResult
    : public ModelBase
{
public:
    DeleteThumbnailResult();
    virtual ~DeleteThumbnailResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteThumbnailResult members

    /// <summary>
    /// 删除截图结果对应的媒资id
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 删除截图结果对应的任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 删除状态。  取值如下： - DELETED：已删除。 - FAILED：删除失败。 - UNKNOW：未知原因
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailResult_H_
