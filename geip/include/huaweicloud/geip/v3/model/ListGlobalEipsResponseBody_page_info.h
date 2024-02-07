
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponseBody_page_info_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponseBody_page_info_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页页码信息
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGlobalEipsResponseBody_page_info
    : public ModelBase
{
public:
    ListGlobalEipsResponseBody_page_info();
    virtual ~ListGlobalEipsResponseBody_page_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalEipsResponseBody_page_info members

    /// <summary>
    /// 翻页时，作为后一页的marker取值
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 翻页时，作为前一页的marker取值
    /// </summary>

    std::string getPreviousMarker() const;
    bool previousMarkerIsSet() const;
    void unsetpreviousMarker();
    void setPreviousMarker(const std::string& value);

    /// <summary>
    /// 当前页的数据总数
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    std::string previousMarker_;
    bool previousMarkerIsSet_;
    int32_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponseBody_page_info_H_
