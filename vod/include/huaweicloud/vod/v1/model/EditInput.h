
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_EditInput_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_EditInput_H_


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
class HUAWEICLOUD_VOD_V1_EXPORT  EditInput
    : public ModelBase
{
public:
    EditInput();
    virtual ~EditInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditInput members

    /// <summary>
    /// 媒资ID 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 剪切开始时间，单位：秒，最大长度支持32。 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 剪切结束时间，单位：秒，最大长度支持32。 
    /// </summary>

    std::string getTimelineEnd() const;
    bool timelineEndIsSet() const;
    void unsettimelineEnd();
    void setTimelineEnd(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineEnd_;
    bool timelineEndIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_EditInput_H_
