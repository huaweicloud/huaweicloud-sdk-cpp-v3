
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicLayoutInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicLayoutInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/meeting/v1/model/SubPicLayoutInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PicLayoutInfo
    : public ModelBase
{
public:
    PicLayoutInfo();
    virtual ~PicLayoutInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PicLayoutInfo members

    /// <summary>
    /// 横向小格子数。
    /// </summary>

    int32_t getX() const;
    bool XIsSet() const;
    void unsetx();
    void setX(int32_t value);

    /// <summary>
    /// 纵向小格子数。
    /// </summary>

    int32_t getY() const;
    bool YIsSet() const;
    void unsety();
    void setY(int32_t value);

    /// <summary>
    /// 多画面信息。
    /// </summary>

    std::vector<SubPicLayoutInfo>& getSubPicLayoutInfoList();
    bool subPicLayoutInfoListIsSet() const;
    void unsetsubPicLayoutInfoList();
    void setSubPicLayoutInfoList(const std::vector<SubPicLayoutInfo>& value);


protected:
    int32_t x_;
    bool xIsSet_;
    int32_t y_;
    bool yIsSet_;
    std::vector<SubPicLayoutInfo> subPicLayoutInfoList_;
    bool subPicLayoutInfoListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicLayoutInfo_H_
