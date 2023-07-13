
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_StructDetailVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_StructDetailVO_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灾备初始化对象详情信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  StructDetailVO
    : public ModelBase
{
public:
    StructDetailVO();
    virtual ~StructDetailVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StructDetailVO members

    /// <summary>
    /// 进度
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 源数据库名称
    /// </summary>

    std::string getSrcDB() const;
    bool srcDBIsSet() const;
    void unsetsrcDB();
    void setSrcDB(const std::string& value);

    /// <summary>
    /// 源对象名称
    /// </summary>

    std::string getSrcTB() const;
    bool srcTBIsSet() const;
    void unsetsrcTB();
    void setSrcTB(const std::string& value);

    /// <summary>
    /// 目标数据库名称
    /// </summary>

    std::string getDstDB() const;
    bool dstDBIsSet() const;
    void unsetdstDB();
    void setDstDB(const std::string& value);

    /// <summary>
    /// 目标对象名称
    /// </summary>

    std::string getDstTB() const;
    bool dstTBIsSet() const;
    void unsetdstTB();
    void setDstTB(const std::string& value);


protected:
    int32_t progress_;
    bool progressIsSet_;
    std::string srcDB_;
    bool srcDBIsSet_;
    std::string srcTB_;
    bool srcTBIsSet_;
    std::string dstDB_;
    bool dstDBIsSet_;
    std::string dstTB_;
    bool dstTBIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_StructDetailVO_H_
