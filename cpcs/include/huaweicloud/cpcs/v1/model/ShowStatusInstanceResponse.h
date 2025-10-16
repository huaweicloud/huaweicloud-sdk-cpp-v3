
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/ShowStatusInstanceItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatusInstanceResponse();
    virtual ~ShowStatusInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusInstanceResponse members

    /// <summary>
    /// CPU使用率
    /// </summary>

    std::vector<ShowStatusInstanceItem>& getCpuUtils();
    bool cpuUtilsIsSet() const;
    void unsetcpuUtils();
    void setCpuUtils(const std::vector<ShowStatusInstanceItem>& value);

    /// <summary>
    /// 内存使用率
    /// </summary>

    std::vector<ShowStatusInstanceItem>& getMemUtils();
    bool memUtilsIsSet() const;
    void unsetmemUtils();
    void setMemUtils(const std::vector<ShowStatusInstanceItem>& value);

    /// <summary>
    /// 磁盘使用率
    /// </summary>

    std::vector<ShowStatusInstanceItem>& getDiskUtils();
    bool diskUtilsIsSet() const;
    void unsetdiskUtils();
    void setDiskUtils(const std::vector<ShowStatusInstanceItem>& value);

    /// <summary>
    /// CPU使用率对应实例名称
    /// </summary>

    std::vector<std::string>& getCpuUtilInstanceNames();
    bool cpuUtilInstanceNamesIsSet() const;
    void unsetcpuUtilInstanceNames();
    void setCpuUtilInstanceNames(const std::vector<std::string>& value);

    /// <summary>
    /// 内存使用率对应实例名称
    /// </summary>

    std::vector<std::string>& getMemUtilInstanceNames();
    bool memUtilInstanceNamesIsSet() const;
    void unsetmemUtilInstanceNames();
    void setMemUtilInstanceNames(const std::vector<std::string>& value);

    /// <summary>
    /// 磁盘使用率对应实例名称
    /// </summary>

    std::vector<std::string>& getDiskUtilInstanceNames();
    bool diskUtilInstanceNamesIsSet() const;
    void unsetdiskUtilInstanceNames();
    void setDiskUtilInstanceNames(const std::vector<std::string>& value);

    /// <summary>
    /// CPU使用率平均值
    /// </summary>

    std::vector<double>& getCpuUtilAverages();
    bool cpuUtilAveragesIsSet() const;
    void unsetcpuUtilAverages();
    void setCpuUtilAverages(std::vector<double> value);

    /// <summary>
    /// 内存使用率平均值
    /// </summary>

    std::vector<double>& getMemUtilAverages();
    bool memUtilAveragesIsSet() const;
    void unsetmemUtilAverages();
    void setMemUtilAverages(std::vector<double> value);

    /// <summary>
    /// 磁盘使用率平均值
    /// </summary>

    std::vector<double>& getDiskUtilAverages();
    bool diskUtilAveragesIsSet() const;
    void unsetdiskUtilAverages();
    void setDiskUtilAverages(std::vector<double> value);


protected:
    std::vector<ShowStatusInstanceItem> cpuUtils_;
    bool cpuUtilsIsSet_;
    std::vector<ShowStatusInstanceItem> memUtils_;
    bool memUtilsIsSet_;
    std::vector<ShowStatusInstanceItem> diskUtils_;
    bool diskUtilsIsSet_;
    std::vector<std::string> cpuUtilInstanceNames_;
    bool cpuUtilInstanceNamesIsSet_;
    std::vector<std::string> memUtilInstanceNames_;
    bool memUtilInstanceNamesIsSet_;
    std::vector<std::string> diskUtilInstanceNames_;
    bool diskUtilInstanceNamesIsSet_;
    std::vector<double> cpuUtilAverages_;
    bool cpuUtilAveragesIsSet_;
    std::vector<double> memUtilAverages_;
    bool memUtilAveragesIsSet_;
    std::vector<double> diskUtilAverages_;
    bool diskUtilAveragesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceResponse_H_
