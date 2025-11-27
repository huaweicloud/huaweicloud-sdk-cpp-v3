
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowStatsConfigsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowStatsConfigsRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowStatsConfigsRequest
    : public ModelBase
{
public:
    ShowStatsConfigsRequest();
    virtual ~ShowStatsConfigsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatsConfigsRequest members

    /// <summary>
    /// - 配置类型 - 目前支持0：热点统计，1：ces上报
    /// </summary>

    int32_t getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(int32_t value);

    /// <summary>
    /// **参数解释：** 分页查询每页的数量 **约束限制：** 不涉及 **取值范围：** 1-1000 **默认取值：** 10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 查询偏移量，表示跳过多少个数据开始查询 **约束限制：** 不涉及 **取值范围：** 0-65535 **默认取值：** 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t configType_;
    bool configTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStatsConfigsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStatsConfigsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowStatsConfigsRequest_H_
