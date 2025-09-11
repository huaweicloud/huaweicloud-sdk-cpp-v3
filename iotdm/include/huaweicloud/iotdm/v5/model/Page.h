
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Page_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Page_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询批量分页结构体，定义了分页页码、每页记录数、记录总数、该页记录的最大Id。
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  Page
    : public ModelBase
{
public:
    Page();
    virtual ~Page();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Page members

    /// <summary>
    /// 满足查询条件的记录总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 本次分页查询结果中最后一条记录的ID，可在下一次分页查询时使用。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::string marker_;
    bool markerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Page_H_
