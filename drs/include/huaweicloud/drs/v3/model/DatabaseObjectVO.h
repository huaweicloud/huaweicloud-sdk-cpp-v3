
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectVO_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 数据库对象信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DatabaseObjectVO
    : public ModelBase
{
public:
    DatabaseObjectVO();
    virtual ~DatabaseObjectVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseObjectVO members

    /// <summary>
    /// 数据库对象和数据库表名称，例如格式为hec-*-*-drs_test1。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否选择高级配置，值为true。
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string select_;
    bool selectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectVO_H_
