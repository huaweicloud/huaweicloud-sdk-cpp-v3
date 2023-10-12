
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowProtectedInstanceParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtectedInstancesResponse();
    virtual ~ListProtectedInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtectedInstancesResponse members

    /// <summary>
    /// 保护实例的信息列表。
    /// </summary>

    std::vector<ShowProtectedInstanceParams>& getProtectedInstances();
    bool protectedInstancesIsSet() const;
    void unsetprotectedInstances();
    void setProtectedInstances(const std::vector<ShowProtectedInstanceParams>& value);

    /// <summary>
    /// 列表中包含的保护实例个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ShowProtectedInstanceParams> protectedInstances_;
    bool protectedInstancesIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesResponse_H_
