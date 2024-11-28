
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_Path_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_Path_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  Path
    : public ModelBase
{
public:
    Path();
    virtual ~Path();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Path members

    /// <summary>
    /// 路径ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 路径状态，有available和remove两种状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 该路径所属于的客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 路径详情
    /// </summary>

    std::string getDirPath() const;
    bool dirPathIsSet() const;
    void unsetdirPath();
    void setDirPath(const std::string& value);

    /// <summary>
    /// 排除目录列表，多个路径之间以英文逗号分隔 &gt; 该特性目前处于公测阶段，部分region可能无法使用。 
    /// </summary>

    std::string getExcludePaths() const;
    bool excludePathsIsSet() const;
    void unsetexcludePaths();
    void setExcludePaths(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;
    std::string dirPath_;
    bool dirPathIsSet_;
    std::string excludePaths_;
    bool excludePathsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_Path_H_
