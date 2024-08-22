
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DriverInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListUserJdbcDriversResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserJdbcDriversResponse();
    virtual ~ListUserJdbcDriversResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserJdbcDriversResponse members

    /// <summary>
    /// 驱动文件总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 驱动文件列表。
    /// </summary>

    std::vector<DriverInfo>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<DriverInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<DriverInfo> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversResponse_H_
