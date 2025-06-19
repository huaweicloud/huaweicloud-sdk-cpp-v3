
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_PageDataIpBlacklistsVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_PageDataIpBlacklistsVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IpBlacklistVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询出的IP黑名单列表信息，total字段表示已经导入的IP黑名单条数，如果没有导入过则total字段为0条，最大为2条。 records字段中保存了返回的IP黑名单列表信息。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  PageDataIpBlacklistsVo
    : public ModelBase
{
public:
    PageDataIpBlacklistsVo();
    virtual ~PageDataIpBlacklistsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageDataIpBlacklistsVo members

    /// <summary>
    /// 一次查询返回的记录条数，调用接口时赋值
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 本次查询结果返回后下次查询的偏移
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询出的IP黑名单列表信息
    /// </summary>

    std::vector<IpBlacklistVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<IpBlacklistVO>& value);

    /// <summary>
    /// 防火墙实例中IP黑名单的总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<IpBlacklistVO> records_;
    bool recordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_PageDataIpBlacklistsVo_H_
