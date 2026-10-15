
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayCompareResultResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayCompareResultResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回放库和镜像库里面SQL执行结果不一致详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayCompareResultResp
    : public ModelBase
{
public:
    ReplayCompareResultResp();
    virtual ~ReplayCompareResultResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayCompareResultResp members

    /// <summary>
    /// SQL模板
    /// </summary>

    std::string getSqlTemplate() const;
    bool sqlTemplateIsSet() const;
    void unsetsqlTemplate();
    void setSqlTemplate(const std::string& value);

    /// <summary>
    /// SQL模板MD5哈希值
    /// </summary>

    std::string getSqlTemplateMd5() const;
    bool sqlTemplateMd5IsSet() const;
    void unsetsqlTemplateMd5();
    void setSqlTemplateMd5(const std::string& value);

    /// <summary>
    /// SQL参数
    /// </summary>

    std::string getSqlParams() const;
    bool sqlParamsIsSet() const;
    void unsetsqlParams();
    void setSqlParams(const std::string& value);

    /// <summary>
    /// 目标库内容
    /// </summary>

    std::string getTargetContent() const;
    bool targetContentIsSet() const;
    void unsettargetContent();
    void setTargetContent(const std::string& value);

    /// <summary>
    /// 镜像库内容
    /// </summary>

    std::string getMirrorContent() const;
    bool mirrorContentIsSet() const;
    void unsetmirrorContent();
    void setMirrorContent(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string sqlTemplate_;
    bool sqlTemplateIsSet_;
    std::string sqlTemplateMd5_;
    bool sqlTemplateMd5IsSet_;
    std::string sqlParams_;
    bool sqlParamsIsSet_;
    std::string targetContent_;
    bool targetContentIsSet_;
    std::string mirrorContent_;
    bool mirrorContentIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayCompareResultResp_H_
