
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListMarketplaceEngineProductsRequest
    : public ModelBase
{
public:
    ListMarketplaceEngineProductsRequest();
    virtual ~ListMarketplaceEngineProductsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMarketplaceEngineProductsRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 服务商ID。
    /// </summary>

    std::string getBpDomainId() const;
    bool bpDomainIdIsSet() const;
    void unsetbpDomainId();
    void setBpDomainId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 按照引擎ID查询。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string bpDomainId_;
    bool bpDomainIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string engineId_;
    bool engineIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMarketplaceEngineProductsRequest& dereference_from_shared_ptr(std::shared_ptr<ListMarketplaceEngineProductsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsRequest_H_
