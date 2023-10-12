
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteSessionRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteSessionRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteSessionRequestBody
    : public ModelBase
{
public:
    DeleteSessionRequestBody();
    virtual ~DeleteSessionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSessionRequestBody members

    /// <summary>
    /// 需要终结的会话ID列表。
    /// </summary>

    std::vector<std::string>& getSessions();
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> sessions_;
    bool sessionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteSessionRequestBody_H_
