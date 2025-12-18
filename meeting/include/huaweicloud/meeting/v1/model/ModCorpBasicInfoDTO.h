
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpBasicInfoDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpBasicInfoDTO_H_


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
/// 企业注册信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModCorpBasicInfoDTO
    : public ModelBase
{
public:
    ModCorpBasicInfoDTO();
    virtual ~ModCorpBasicInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModCorpBasicInfoDTO members

    /// <summary>
    /// 企业所在地，最大长度为255个字符。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 企业自动开户开关。
    /// </summary>

    bool isAutoUserCreate() const;
    bool autoUserCreateIsSet() const;
    void unsetautoUserCreate();
    void setAutoUserCreate(bool value);


protected:
    std::string address_;
    bool addressIsSet_;
    bool autoUserCreate_;
    bool autoUserCreateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpBasicInfoDTO_H_
