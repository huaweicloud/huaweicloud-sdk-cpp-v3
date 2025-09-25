
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLanguagesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLanguagesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/LanguagesDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListRepositoryLanguagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRepositoryLanguagesResponse();
    virtual ~ListRepositoryLanguagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryLanguagesResponse members

    /// <summary>
    /// **参数解释：** 语言描述。
    /// </summary>

    std::vector<LanguagesDto>& getLanguages();
    bool languagesIsSet() const;
    void unsetlanguages();
    void setLanguages(const std::vector<LanguagesDto>& value);

    /// <summary>
    /// **参数解释：** 返回状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<LanguagesDto> languages_;
    bool languagesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLanguagesResponse_H_
