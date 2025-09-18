
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_PageInfo_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页查询页的信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// 下一页的marker，为空时表示最后一页。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 当前列表中资源数量。
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_PageInfo_H_
