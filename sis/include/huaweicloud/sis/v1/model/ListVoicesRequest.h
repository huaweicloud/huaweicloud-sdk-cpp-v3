
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ListVoicesRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ListVoicesRequest_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ListVoicesRequest
    : public ModelBase
{
public:
    ListVoicesRequest();
    virtual ~ListVoicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVoicesRequest members

    /// <summary>
    /// 查询已注册的声音列表，每页查询显示的条目数量，默认：10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询已注册的声音列表，页码偏移量，表示从此页码偏移量开始查询，offset大于等于0， 默认：0
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVoicesRequest& dereference_from_shared_ptr(std::shared_ptr<ListVoicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ListVoicesRequest_H_
