
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 一条IP黑名单的导入信息，包括文件名称、生效范围、导入状态、导入时间和导入失败的错误信息。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpBlacklistVO
    : public ModelBase
{
public:
    IpBlacklistVO();
    virtual ~IpBlacklistVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBlacklistVO members

    /// <summary>
    /// IP黑名单的文件名，对应导出时的文件名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// IP黑名单的生效范围，1表示EIP，2表示NAT
    /// </summary>

    std::vector<int32_t>& getEffectScope();
    bool effectScopeIsSet() const;
    void unseteffectScope();
    void setEffectScope(std::vector<int32_t> value);

    /// <summary>
    /// IP黑名单的导入状态，有三种状态：2：生成中、1：成功、0：失败。
    /// </summary>

    int32_t getImportStatus() const;
    bool importStatusIsSet() const;
    void unsetimportStatus();
    void setImportStatus(int32_t value);

    /// <summary>
    /// IP黑名单的导入时间
    /// </summary>

    int64_t getImportTime() const;
    bool importTimeIsSet() const;
    void unsetimportTime();
    void setImportTime(int64_t value);

    /// <summary>
    /// 导入失败的错误信息
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<int32_t> effectScope_;
    bool effectScopeIsSet_;
    int32_t importStatus_;
    bool importStatusIsSet_;
    int64_t importTime_;
    bool importTimeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistVO_H_
