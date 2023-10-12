
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListProvidersRequest
    : public ModelBase
{
public:
    ListProvidersRequest();
    virtual ~ListProvidersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProvidersRequest members

    /// <summary>
    /// 指定显示语言
    /// </summary>

    std::string getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();
    void setLocale(const std::string& value);

    /// <summary>
    /// 查询记录数默认为200，limit最多为200, 最小值为1
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置，从offset指定的下一条数据开始查询，必须为数字，不能为负数，默认为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 云服务名称
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);


protected:
    std::string locale_;
    bool localeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string provider_;
    bool providerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProvidersRequest& dereference_from_shared_ptr(std::shared_ptr<ListProvidersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersRequest_H_
