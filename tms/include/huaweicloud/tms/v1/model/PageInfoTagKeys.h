
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_PageInfoTagKeys_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_PageInfoTagKeys_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  PageInfoTagKeys
    : public ModelBase
{
public:
    PageInfoTagKeys();
    virtual ~PageInfoTagKeys();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfoTagKeys members

    /// <summary>
    /// 分页位置标识（索引）
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 当前页标签键的数量
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    int32_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_PageInfoTagKeys_H_
