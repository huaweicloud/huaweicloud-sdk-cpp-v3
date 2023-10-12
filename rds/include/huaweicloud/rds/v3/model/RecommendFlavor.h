
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendFlavor_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendFlavor_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/VolumeFlavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RecommendFlavor
    : public ModelBase
{
public:
    RecommendFlavor();
    virtual ~RecommendFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecommendFlavor members

    /// <summary>
    /// 按照实例类型查询
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 规格码
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// CPU大小
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 内存大小（单位：GB）
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 规格类型
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 磁盘规格信息
    /// </summary>

    std::vector<VolumeFlavor>& getVolumeFlavors();
    bool volumeFlavorsIsSet() const;
    void unsetvolumeFlavors();
    void setVolumeFlavors(const std::vector<VolumeFlavor>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<VolumeFlavor> volumeFlavors_;
    bool volumeFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendFlavor_H_
