
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListResourceResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListResourceResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/Resources.h>
#include <huaweicloud/tms/v1/model/Errors.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourceResponse();
    virtual ~ListResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceResponse members

    /// <summary>
    /// 资源列表
    /// </summary>

    std::vector<Resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resources>& value);

    /// <summary>
    /// 查询标签下的资源
    /// </summary>

    std::vector<Errors>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<Errors>& value);

    /// <summary>
    /// 标签下的资源总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<Resources> resources_;
    bool resourcesIsSet_;
    std::vector<Errors> errors_;
    bool errorsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListResourceResponse_H_
