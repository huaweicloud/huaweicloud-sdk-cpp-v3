
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DomainVisibleServiceVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DomainVisibleServiceVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DomainVisibleServiceVo
    : public ModelBase
{
public:
    DomainVisibleServiceVo();
    virtual ~DomainVisibleServiceVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainVisibleServiceVo members

    /// <summary>
    /// 第三方服务名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 第三方服务类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 第三方服务执行方式（0：普通TestHub，1：对接八爪鱼TestHub）
    /// </summary>

    int32_t getExecuteType() const;
    bool executeTypeIsSet() const;
    void unsetexecuteType();
    void setExecuteType(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t type_;
    bool typeIsSet_;
    int32_t executeType_;
    bool executeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DomainVisibleServiceVo_H_
