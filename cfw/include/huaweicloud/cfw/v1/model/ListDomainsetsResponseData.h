
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainsetsResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainsetsResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cfw/v1/model/DomainSetVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListDomainsetsResponseData
    : public ModelBase
{
public:
    ListDomainsetsResponseData();
    virtual ~ListDomainsetsResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainsetsResponseData members

    /// <summary>
    /// 每页显示个数，范围为1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 域名组列表
    /// </summary>

    std::vector<DomainSetVo>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<DomainSetVo>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<DomainSetVo> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainsetsResponseData_H_
