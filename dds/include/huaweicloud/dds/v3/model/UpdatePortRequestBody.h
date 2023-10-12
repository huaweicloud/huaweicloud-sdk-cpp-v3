
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdatePortRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdatePortRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_DDS_V3_EXPORT  UpdatePortRequestBody
    : public ModelBase
{
public:
    UpdatePortRequestBody();
    virtual ~UpdatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePortRequestBody members

    /// <summary>
    /// 新端口号。端口号有效范围为2100~9500，27017，27018，27019。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);


protected:
    int32_t port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdatePortRequestBody_H_
