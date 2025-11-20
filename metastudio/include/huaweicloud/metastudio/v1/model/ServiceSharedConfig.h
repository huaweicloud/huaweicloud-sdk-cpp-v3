
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ServiceSharedConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ServiceSharedConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 业务共享配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ServiceSharedConfig
    : public ModelBase
{
public:
    ServiceSharedConfig();
    virtual ~ServiceSharedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceSharedConfig members

    /// <summary>
    /// 开启共享配置
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 可选的共享租户列表
    /// </summary>

    std::vector<std::string>& getOptionalProjectIds();
    bool optionalProjectIdsIsSet() const;
    void unsetoptionalProjectIds();
    void setOptionalProjectIds(const std::vector<std::string>& value);

    /// <summary>
    /// 共享免审核
    /// </summary>

    bool isNoNeedReview() const;
    bool noNeedReviewIsSet() const;
    void unsetnoNeedReview();
    void setNoNeedReview(bool value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::vector<std::string> optionalProjectIds_;
    bool optionalProjectIdsIsSet_;
    bool noNeedReview_;
    bool noNeedReviewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ServiceSharedConfig_H_
