
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicInfoNotify_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicInfoNotify_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子画面信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PicInfoNotify
    : public ModelBase
{
public:
    PicInfoNotify();
    virtual ~PicInfoNotify();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PicInfoNotify members

    /// <summary>
    /// 多画面中每个画面的编号，编号从1开始。
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);

    /// <summary>
    /// 每个画面中的与会者SIP号码。SIP号码可以通过[[查询企业通讯](https://support.huaweicloud.com/api-meeting/meeting_21_0512.html)](tag:hws)[[查询企业通讯](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0512.html)](tag:hk)获取。
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 是否为辅流。 * 0： 不是辅流 * 1： 是辅流 
    /// </summary>

    int32_t getShare() const;
    bool shareIsSet() const;
    void unsetshare();
    void setShare(int32_t value);


protected:
    int32_t index_;
    bool indexIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    int32_t share_;
    bool shareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PicInfoNotify_H_
