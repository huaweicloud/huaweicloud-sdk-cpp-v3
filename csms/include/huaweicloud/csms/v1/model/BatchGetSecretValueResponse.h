
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Version.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchGetSecretValueResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchGetSecretValueResponse();
    virtual ~BatchGetSecretValueResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchGetSecretValueResponse members

    /// <summary>
    /// **参数解释：**  返回的凭据版本总数 **取值范围：** 不涉及
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释：**  凭据版本值 **取值范围：** 不涉及
    /// </summary>

    std::vector<Version>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<Version>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Version> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueResponse_H_
