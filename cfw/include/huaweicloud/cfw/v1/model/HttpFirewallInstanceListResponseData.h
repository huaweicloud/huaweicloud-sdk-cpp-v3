
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpFirewallInstanceListResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpFirewallInstanceListResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/FirewallInstanceVO.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  HttpFirewallInstanceListResponseData
    : public ModelBase
{
public:
    HttpFirewallInstanceListResponseData();
    virtual ~HttpFirewallInstanceListResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpFirewallInstanceListResponseData members

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
    /// 租户项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 防火墙总数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 查询防火墙列表记录
    /// </summary>

    std::vector<FirewallInstanceVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<FirewallInstanceVO>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<FirewallInstanceVO> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpFirewallInstanceListResponseData_H_
