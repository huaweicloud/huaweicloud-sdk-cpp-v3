
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_RpoStattisticsParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_RpoStattisticsParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// rpo超标记录
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  RpoStattisticsParams
    : public ModelBase
{
public:
    RpoStattisticsParams();
    virtual ~RpoStattisticsParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RpoStattisticsParams members

    /// <summary>
    /// 资源的RPO超标趋势记录id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源的RPO超标趋势记录打点时间。默认格式为：\&quot;yyyy-MM-dd HH:mm\&quot;。
    /// </summary>

    std::string getPointTime() const;
    bool pointTimeIsSet() const;
    void unsetpointTime();
    void setPointTime(const std::string& value);

    /// <summary>
    /// RPO超标的资源个数。
    /// </summary>

    int32_t getResourceNum() const;
    bool resourceNumIsSet() const;
    void unsetresourceNum();
    void setResourceNum(int32_t value);

    /// <summary>
    /// RPO超标的资源类型。replication：表示查询复制对的RPO超标趋势记录。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 创建时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string pointTime_;
    bool pointTimeIsSet_;
    int32_t resourceNum_;
    bool resourceNumIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_RpoStattisticsParams_H_
