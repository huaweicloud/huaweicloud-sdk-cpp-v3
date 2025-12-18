
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgPropertyDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgPropertyDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  OrgPropertyDTO
    : public ModelBase
{
public:
    OrgPropertyDTO();
    virtual ~OrgPropertyDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrgPropertyDTO members

    /// <summary>
    /// 配置项key。 开通本地录制功能，参数填写：enableClientRecord。 
    /// </summary>

    std::string getPropertyKey() const;
    bool propertyKeyIsSet() const;
    void unsetpropertyKey();
    void setPropertyKey(const std::string& value);

    /// <summary>
    /// 配置项值。 开通本地录制功能，参数填写：true。 
    /// </summary>

    std::string getPropertyValue() const;
    bool propertyValueIsSet() const;
    void unsetpropertyValue();
    void setPropertyValue(const std::string& value);


protected:
    std::string propertyKey_;
    bool propertyKeyIsSet_;
    std::string propertyValue_;
    bool propertyValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgPropertyDTO_H_
