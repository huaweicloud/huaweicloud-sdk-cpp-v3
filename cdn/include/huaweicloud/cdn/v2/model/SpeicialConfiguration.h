
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SpeicialConfiguration_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SpeicialConfiguration_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SpeicialConfiguration
    : public ModelBase
{
public:
    SpeicialConfiguration();
    virtual ~SpeicialConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpeicialConfiguration members

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 备忘录
    /// </summary>

    std::string getNote() const;
    bool noteIsSet() const;
    void unsetnote();
    void setNote(const std::string& value);


protected:
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string note_;
    bool noteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SpeicialConfiguration_H_
