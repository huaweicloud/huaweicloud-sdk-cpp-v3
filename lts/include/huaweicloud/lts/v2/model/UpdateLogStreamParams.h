
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/lts/v2/model/TagsBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogStreamParams
    : public ModelBase
{
public:
    UpdateLogStreamParams();
    virtual ~UpdateLogStreamParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogStreamParams members

    /// <summary>
    /// 日志存储时间（天）。
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 标签字段信息
    /// </summary>

    std::vector<TagsBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsBody>& value);

    /// <summary>
    /// 日志是否存储
    /// </summary>

    bool isWhetherLogStorage() const;
    bool whetherLogStorageIsSet() const;
    void unsetwhetherLogStorage();
    void setWhetherLogStorage(bool value);


protected:
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::vector<TagsBody> tags_;
    bool tagsIsSet_;
    bool whetherLogStorage_;
    bool whetherLogStorageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_
